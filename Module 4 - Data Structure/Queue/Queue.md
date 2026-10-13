* Definition:

A Queue is a linear data structure that follows FIFO (First In, First Out). The element inserted first is removed first.

Example: A line of people waiting at a ticket counter.

*Operations :

Enqueue	- Add at rear.
Dequeue	- Remove from front.
Front/Peek - View first element.
Is Empty - Check if empty

* Why Do We Need?

Queues are useful when tasks must be processed in the order they arrive.
- Ticket counters: Serve customers in arrival order.
- Printers: Process print jobs in a queue.
- CPU scheduling: Some scheduling algorithms use queues.
- Networking: Buffer packets while they wait to be processed.

* Components:

Component	Purpose
Front	First element to be removed
Rear	End where new elements are added
Enqueue	Insert an element
Dequeue	Remove the front element
Peek	View the front element
Is Empty	Check whether the queue contains elements


* Practice Problem:
Easy: 
Create a queue of five numbers and remove them one by one.

Medium: 
Simulate a ticket counter where users can join the queue and the next customer is served.

Challenge:
Customer Service Queue
Create a program that:
1. Accepts the names of three customers.
2. Adds them to a queue in arrival order.
3. Serves each customer one by one.
4. Prints the name of each customer when served.
Expected output for Rahul, Priya, and Aman:

conceptual - Implement a queue using two stacks.