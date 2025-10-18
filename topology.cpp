#include "topology.h"
#include <iostream>

Topology::Topology() {}

void Topology::buildSimpleHome() {
    std::cout << "[Topology] Building simple home network...\n";
    auto router = std::make_shared<Node>("Router");
    auto pc = std::make_shared<Node>("PC");
    auto iot = std::make_shared<Node>("SmartLight");
    nodes.push_back(router);
    nodes.push_back(pc);
    nodes.push_back(iot);
}

void Topology::start() {
    std::cout << "[Topology] Starting all nodes...\n";
    for (auto& node : nodes) node->start();
}

void Topology::stop() {
    std::cout << "[Topology] Stopping all nodes...\n";
    for (auto& node : nodes) node->stop();
}

std::vector<std::shared_ptr<Node>> Topology::getNodes() {
    return nodes;
}
