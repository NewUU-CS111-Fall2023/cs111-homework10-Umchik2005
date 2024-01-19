/*
 * Author:
 * Date:
 * Name:
 */

class Problem2 {
public:

    enum State {
        START,
        FIND_SEPARATOR,
        INCREMENT,
        MOVE_TO_NEXT,
        HALT
    };

// Function to simulate the Turing machine
    void turingMachineAddition(string tape) {
        State currentState = START;
        int headPosition = 0;

        while (currentState != HALT) {
            char currentSymbol = tape[headPosition];

            switch (currentState) {
                case START:
                    if (currentSymbol == '1') {
                        currentState = FIND_SEPARATOR;
                    } else {
                        cout << "Invalid input format" << endl;
                        currentState = HALT;
                    }
                    break;

                case FIND_SEPARATOR:
                    if (currentSymbol == '1') {
                        tape[headPosition] = '0'; 
                        headPosition--;
                    } else if (currentSymbol == '0') {
                        currentState = INCREMENT;
                        headPosition++;
                    } else {
                        cout << "Invalid input format" << endl;
                        currentState = HALT;
                    }
                    break;

                case INCREMENT:
                    if (currentSymbol == '1') {
                        tape[headPosition] = '0';  
                        headPosition++;
                    } else if (currentSymbol == '0') {
                        currentState = MOVE_TO_NEXT;
                    } else {
                        cout << "Invalid input format" << endl;
                        currentState = HALT;
                    }
                    break;

                case MOVE_TO_NEXT:
                    if (currentSymbol == '0') {
                        headPosition++;
                    } else if (currentSymbol == '1') {
                        tape[headPosition] = '1';
                        currentState = HALT;
                    } else {
                        cout << "Invalid input format" << endl;
                        currentState = HALT;
                    }
                    break;
            }
        }

        cout << "Result: " << tape << endl;
    }


};