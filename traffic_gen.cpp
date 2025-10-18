#include "traffic_gen.h"
#include <iostream>
#include <thread>
#include <chrono>

TrafficGen::TrafficGen(Topology* topo) : topology(topo) {}

void TrafficGen::start() {
    std::cout << "[TrafficGen] Starting traffic simulation...\n";

    // Simulate multiple packets dynamically
    for (int i = 0; i < 3; ++i) {
        std::cout << "[TrafficGen] Simulated packet from PC -> Router.\n";
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
}
