## Objective
This C++ program simulates a home network environment composed of interconnected smart devices. It models how nodes 
(like a Router, PC, and SmartLight) communicate, generate traffic, and are monitored over time. The simulation runs 
multiple components concurrently using threads, demonstrating a simplified view of network behavior, monitoring, and control.

-----
# ⚙️ Key Features
🏠 Network Topology Setup – Builds a virtual home network with defined node relationships.
📡 Traffic Simulation – Generates and logs network traffic between devices.
🧭 Real-Time Monitoring – Observes and reports node status and communication.
🧵 Concurrent Execution – Uses multithreading for realistic simulation behavior.
🛑 Graceful Lifecycle Management – Handles startup, runtime, and clean shutdown phases.

----- 
# Architecture
Application Layer:
  • main.cpp – Controls simulation, threads, and shutdown

Core Simulation Layer:
  • topology.cpp – Builds home network
  • traffic_gen.cpp – Generates data packets
  • monitor.cpp – Logs network events

Device Layer:
  • node.cpp – Defines Router, PC, SmartLight behaviors
  
-----
git clone: https://github.com/KimestuKun/network-simulation.git 
