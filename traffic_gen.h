#pragma once
#include "topology.h"

class TrafficGen {
public:
    TrafficGen(Topology* topo);
    void start();

private:
    Topology* topology;
};
