# Towers-of-Hanoi-Iterative

This implementation uses three vectors to represent the three towers, with each element in the vector representing a disk. 
The moveDisk function moves the top disk from one tower to another by pushing and popping from the back of the vector.

The towersOfHanoi function initializes the towers with the appropriate number of disks and determines the order in which the towers should be moved based on the parity of n. 
It then iteratively moves the disks according to the rules of the Towers of Hanoi puzzle using modulo arithmetic.

Running this program with n = 3 will output the following:

Move disk from tower 1 to tower 3
Move disk from tower 1 to tower 2
Move disk from tower 3 to tower 2
Move disk from tower 1 to tower 3
Move disk from tower 2 to tower 1
Move disk from tower 2 to tower 3
Move disk from tower 1 to tower 3


This output shows the sequence of moves required to move all the disks from the first tower to the third tower.
