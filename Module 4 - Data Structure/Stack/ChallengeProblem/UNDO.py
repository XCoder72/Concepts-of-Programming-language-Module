# Undo System using Stack

Actions = []


def recent_Actions_Done(action):
    Actions.append(action)


def Undo():
    return Actions.pop() if Actions else None


while True:
    action = input("Enter Recent Action (or 'undo' / 'exit'): ")

    if action == "exit":
        break

    elif action == "undo":
        if Actions:
            print("Undo Action:", Undo())

            if Actions:
                print("Previous Action:", Actions[-1])
            else:
                print("No Previous Action")
        else:
            print("Nothing to Undo")

    else:
        recent_Actions_Done(action)
        print("Action Added:", action)

    print()