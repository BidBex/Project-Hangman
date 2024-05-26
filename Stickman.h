/* #ifndef STICKMAN_H_INCLUDED
#define STICKMAN_H_INCLUDED

int stickman(int vieti, int dificultate)
if(dificultate == 1)
  if (vieti == 5) {
        cout << "  +---+\n";
        cout << "      |\n";
        cout << "      |\n";
        cout << "      |\n";
        cout << "=======\n";
    } else if (vieti == 4) {
        cout << "  +---+\n";
        cout << "  O   |\n";
        cout << "      |\n";
        cout << "      |\n";
        cout << "=======\n";
    } else if (vieti == 3) {
        cout << "  +---+\n";
        cout << "  O   |\n";
        cout << "  |   |\n";
        cout << "      |\n";
        cout << "=======\n";
    } else if (vieti == 2) {
        cout << "  +---+\n";
        cout << "  O   |\n";
        cout << " /|   |\n";
        cout << " /    |\n";
        cout << "=======\n";
    } else if (vieti == 1) {
        cout << "  +---+\n";
        cout << "  O   |\n";
        cout << " /|\  |\n";
        cout << " /    |\n";
        cout << "=======\n";
    } else if (vieti == 0) {
        cout << "  +---+\n";
        cout << "  O   |\n";
        cout << " /|\  |\n";
        cout << " / \  |\n";
        cout << "=======\n";
    }
if(dificultate == 2)
  if (vieti == 4) {
        cout << "  +---+\n";
        cout << "      |\n";
        cout << "      |\n";
        cout << "      |\n";
        cout << "=======\n";
    } else if (vieti == 3) {
        cout << "  +---+\n";
        cout << "  O   |\n";
        cout << "      |\n";
        cout << "      |\n";
        cout << "=======\n";
    } else if (vieti == 2) {
        cout << "  +---+\n";
        cout << "  O   |\n";
        cout << "  |   |\n";
        cout << "      |\n";
        cout << "=======\n";
    } else if (vieti == 1) {
        cout << "  +---+\n";
        cout << "  O   |\n";
        cout << " /|   |\n";
        cout << " /    |\n";
        cout << "=======\n";
    } else if (vieti == 0) {
        cout << "  +---+\n";
        cout << "  O   |\n";
        cout << " /|\  |\n";
        cout << " / \  |\n";
        cout << "=======\n";
    }
if(dificultate == 3)
  if (vieti == 3) {
        cout << "  +---+\n";
        cout << "      |\n";
        cout << "      |\n";
        cout << "      |\n";
        cout << "=======\n";
    } else if (vieti == 2) {
        cout << "  +---+\n";
        cout << "  O   |\n";
        cout << "  |   |\n";
        cout << "      |\n";
        cout << "=======\n";
    } else if (vieti == 1) {
        cout << "  +---+\n";
        cout << "  O   |\n";
        cout << " /|   |\n";
        cout << " /    |\n";
        cout << "=======\n";
    } else if (vieti == 0) {
        cout << "  +---+\n";
        cout << "  O   |\n";
        cout << " /|\  |\n";
        cout << " / \  |\n";
        cout << "=======\n";
    }
if(dificultate == 4)
  if (vieti == 2) {
        cout << "  +---+\n";
        cout << "      |\n";
        cout << "      |\n";
        cout << "      |\n";
        cout << "=======\n";
    } else if (vieti == 1) {
        cout << "  +---+\n";
        cout << "  O   |\n";
        cout << " /|\  |\n";
        cout << "      |\n";
        cout << "=======\n";
    } else if (vieti == 0) {
        cout << "  +---+\n";
        cout << "  O   |\n";
        cout << " /|\  |\n";
        cout << " / \  |\n";
        cout << "=======\n";
    }
if(dificultate == 5)
  if (vieti == 1) {
        cout << "  +---+\n";
        cout << "  O   |\n";
        cout << " /|\  |\n";
        cout << "      |\n";
        cout << "=======\n";
    } else if (vieti == 0) {
        cout << "  +---+\n";
        cout << "  O   |\n";
        cout << " /|\  |\n";
        cout << " / \  |\n";
        cout << "=======\n";
    }


#endif // STICKMAN_H_INCLUDED
*/

#ifndef STICKMAN_H_INCLUDED
#define STICKMAN_H_INCLUDED

#include <string>

std::string stickman(int vieti, int dificultate) {
    std::string result;

    if(dificultate == 1) {
        if (vieti == 5) {
            result += "  +---+\n";
            result += "      |\n";
            result += "      |\n";
            result += "      |\n";
            result += "=======\n";
        } else if (vieti == 4) {
            result += "  +---+\n";
            result += "  O   |\n";
            result += "      |\n";
            result += "      |\n";
            result += "=======\n";
        } else if (vieti == 3) {
            result += "  +---+\n";
            result += "  O   |\n";
            result += "  |   |\n";
            result += "      |\n";
            result += "=======\n";
        } else if (vieti == 2) {
            result += "  +---+\n";
            result += "  O   |\n";
            result += " /|   |\n";
            result += " /    |\n";
            result += "=======\n";
        } else if (vieti == 1) {
            result += "  +---+\n";
            result += "  O   |\n";
            result += " /|\  |\n";
            result += " /    |\n";
            result += "=======\n";
        } else if (vieti == 0) {
            result += "  +---+\n";
            result += "  O   |\n";
            result += " /|\  |\n";
            result += " / \  |\n";
            result += "=======\n";
        }
    } else if(dificultate == 2) {
        if (vieti == 4) {
            result += "  +---+\n";
            result += "      |\n";
            result += "      |\n";
            result += "      |\n";
            result += "=======\n";
        } else if (vieti == 3) {
            result += "  +---+\n";
            result += "  O   |\n";
            result += "      |\n";
            result += "      |\n";
            result += "=======\n";
        } else if (vieti == 2) {
            result += "  +---+\n";
            result += "  O   |\n";
            result += "  |   |\n";
            result += "      |\n";
            result += "=======\n";
        } else if (vieti == 1) {
            result += "  +---+\n";
            result += "  O   |\n";
            result += " /|   |\n";
            result += " /    |\n";
            result += "=======\n";
        } else if (vieti == 0) {
            result += "  +---+\n";
            result += "  O   |\n";
            result += " /|\  |\n";
            result += " / \  |\n";
            result += "=======\n";
        }
    } else if(dificultate == 3) {
        if (vieti == 3) {
            result += "  +---+\n";
            result += "      |\n";
            result += "      |\n";
            result += "      |\n";
            result += "=======\n";
        } else if (vieti == 2) {
            result += "  +---+\n";
            result += "  O   |\n";
            result += "  |   |\n";
            result += "      |\n";
            result += "=======\n";
        } else if (vieti == 1) {
            result += "  +---+\n";
            result += "  O   |\n";
            result += " /|   |\n";
            result += " /    |\n";
            result += "=======\n";
        } else if (vieti == 0) {
            result += "  +---+\n";
            result += "  O   |\n";
            result += " /|\  |\n";
            result += " / \  |\n";
            result += "=======\n";
        }
    } else if(dificultate == 4) {
        if (vieti == 2) {
            result += "  +---+\n";
            result += "      |\n";
            result += "      |\n";
            result += "      |\n";
            result += "=======\n";
        } else if (vieti == 1) {
            result += "  +---+\n";
            result += "  O   |\n";
            result += "      |\n";
            result += "      |\n";
            result += "=======\n";
        } else if (vieti == 0) {
            result += "  +---+\n";
            result += "  O   |\n";
            result += " /|\  |\n";
            result += " / \  |\n";
            result += "=======\n";
        }
    } else if(dificultate == 5) {
        if (vieti == 1) {
            result += "  +---+\n";
            result += "  O    |\n";
            result += " /|\   |\n";
            result += "       |\n";
            result += "=======\n";
        } else if (vieti == 0) {
            result += "  +---+\n";
            result += "  O    |\n";
            result += " /|\   |\n";
            result += " / \   |\n";
            result += "=======\n";
        }
    }

    return result;
}

#endif // STICKMAN_H_INCLUDED
