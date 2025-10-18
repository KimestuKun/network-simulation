#pragma once
#include "topology.h"

class Monitor {
public:
    Monitor(Topology* topo);
    void start();

private:
    Topology* topology;
};
