#include "node.h"
#include <iostream>

Node::Node(const std::string& name) : name(name) {}

void Node::start() {
    std::cout << "[Node] " << name << " started.\n";
}

void Node::stop() {
    std::cout << "[Node] " << name << " stopped.\n";
}

std::string Node::getName() const {
    return name;
}
