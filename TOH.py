import pandas as pd
import matplotlib.pyplot as plt

# Extract inputs and outputs
x = []
y = []

# Plot graph
plt.figure()
plt.plot(x, y, marker='o')
plt.xlabel("Number of Disks (Input)")
plt.ylabel("Time Taken (Seconds)")
plt.title("Tower of Hanoi: Input vs Time")
plt.savefig("tower_of_hanoi_graph.png")
plt.show()
