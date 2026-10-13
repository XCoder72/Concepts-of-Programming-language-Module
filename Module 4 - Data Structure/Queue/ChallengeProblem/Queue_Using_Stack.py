"""Implementation of a queue using two stacks in Python. """

def Push(s1, x):
    s1.append(x)


def pop(s1, s2):
    if not s2:
        while s1:
            s2.append(s1.pop())

    if not s2:
        print("Queue is empty")
        return None

    return s2.pop()


def main():
    s1 = []
    s2 = []

    while True:
        print("\n1. Enqueue")
        print("2. Dequeue")
        print("3. Exit")

        choice = int(input("Enter your choice: "))

        if choice == 1:
            x = int(input("Enter element: "))
            Push(s1, x)
            print("Element added:", x)

        elif choice == 2:
            result = pop(s1, s2)

            if result is not None:
                print("Removed element:", result)

        elif choice == 3:
            print("Exiting...")
            break

        else:
            print("Invalid choice")


main()