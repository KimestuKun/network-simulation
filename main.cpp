/*  1. Goal of the main function: Parse runtime options / read config.
    2. Initialize global services (logger, metrics, random seed)
    3. Instantiate core components (NetworkSim, Node/Server/Client, ConnectionManager).
    4. Start components (threads or event loop).
    5. Monitor/handle signals (graceful shutdown on Ctrl+C).
    6. Wait for components to finish and clean up resources.

    Run in cmd/bash. cd PATH then g++ all cpp files
    */
 
#include <iostream>
#include <thread>
#include <chrono>
#include "topology.h"
#include "node.h"
#include "monitor.h"
#include "traffic_gen.h"

int main() {
    std::cout << "[Main] Starting Home Network Simulation...\n";

    // 1. Create the network topology
    Topology topo;
    topo.buildSimpleHome();  // adds Router, PC, SmartLight nodes

    // 2. Create traffic generator
    TrafficGen traffic(&topo);

    // 3. Create monitor
    Monitor monitor(&topo);

    // 4. Start simulation
    topo.start();     

    // Start traffic and monitor in separate threads to simulate concurrency
    std::thread trafficThread(&TrafficGen::start, &traffic);
    std::thread monitorThread(&Monitor::start, &monitor);

    // Let the simulation run for a bit
    std::this_thread::sleep_for(std::chrono::seconds(2));

    // 5. Stop simulation
    topo.stop();  

    // Wait for threads to finish
    if (trafficThread.joinable()) trafficThread.join();
    if (monitorThread.joinable()) monitorThread.join();

    std::cout << "[Main] Simulation finished.\n";
    return 0;
}
