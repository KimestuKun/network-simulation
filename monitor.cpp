#include "monitor.h"
#include <iostream>
#include <thread>
#include <chrono>

Monitor::Monitor(Topology* topo) : topology(topo) {}

void Monitor::start() {
    std::cout << "[Monitor] Monitoring network activity...\n";
    
    // Simple loop to print node statuses every second
    for (int i = 0; i < 2; ++i) {
        for (auto& node : topology->getNodes()) {
            std::cout << "[Monitor] Node active: " << node->getName() << "\n";
        }
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
}
