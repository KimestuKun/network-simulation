#pragma once
#include <vector>
#include <memory>
#include "node.h"

class Topology {
public:
    Topology();
    void buildSimpleHome();
    void start();
    void stop();
    std::vector<std::shared_ptr<Node>> getNodes();

private:
    std::vector<std::shared_ptr<Node>> nodes;
};
