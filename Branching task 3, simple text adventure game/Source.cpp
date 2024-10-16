#include <iostream>
#include <string>
using namespace std;

int main() 

{
    cout << "Welcome to the PURGATORY CAVE game. Enjoy and have fun." << endl;
    cout << endl << endl << endl << endl << endl << endl;
    cout << "You stand at the entrance of an ancient temple. There are four doors, each leading to a different part of the temple." << endl;
    cout << "Which door do you choose?" << endl << endl;
    constexpr int kNorth = 1, kEast = 2, kSouth = 3, kWest = 4;
    int door;
    cout << " 1. North - To the Hall of Statues" << endl;
    cout << " 2. East - To the Library of the Lost" << endl;
    cout << " 3. South - To the Garden of Shadows" << endl;
    cout << " 4. West - To the Chamber of Trials" << endl << endl;
    cin >> door;

    switch (door) 
    {
    case kNorth: 
    {
        constexpr int kStand = 1, kRun = 2, kTry = 3, kExamine = 4;
        int statue;
        cout << "You enter the Hall of Statues, a vast room filled with stone figures." << endl;
        cout << "As you walk through, the statues' eyes seem to follow you. Suddenly," << endl;
        cout << "one of the statues moves! What do you do?" << endl << endl;
        cout << " 1. Stand your ground and confront the statue" << endl;
        cout << " 2. Run back to the entrance" << endl;
        cout << " 3. Try to sneak past the moving statues" << endl;
        cout << " 4. Examine the statues closely for clues" << endl << endl;
        cin >> statue;

        switch (statue) 
        {
        case kStand:
            cout << "You stand your ground, raising your weapon. The statue stops moving and nods its head in respect." << endl;
            cout << "It gestures toward a hidden passage at the back of the hall, leading deeper into the temple." << endl;
            cout << "You’ve earned the statue’s favor and you can leave the cave alive!" << endl;
            cout << "YOU WON THE GAME ! " << endl;
            break;

        case kRun:
            cout << "You turn and sprint toward the entrance, but the mist thickens, making it hard to see." << endl;
            cout << "You trip over a vine, and dark shadows wrap around your legs, dragging you deeper into the garden." << endl;
            cout << "GAME OVER." << endl << endl;
            break;

        case kTry:
            cout << "As you approach the entrance, the doors slam shut, trapping you in the Hall of Statues." << endl;
            cout << "The statues begin closing in, stone arms reaching out to seize you." << endl;
            cout << "GAME OVER." << endl << endl;
            break;

        case kExamine:
            cout << "You start searching through the shelves and discover strange, ancient symbols in one of the books." << endl;
            cout << "Suddenly, the whispers grow louder, and the room darkens as shadows begin to gather around you." << endl;
            cout << "GAME OVER." << endl << endl;
            break;

        default:
            cout << "Invalid choice, please choose between 1-4." << endl;
            break;
        }
        break;
    }

    case kEast: 
    {
        constexpr int kFight = 1, kAsk = 2, kTryToRun = 3, kHide = 4;
        int library;
        cout << "As you step into the Library of the Lost, you hear eerie whispers and notice the air grows colder." << endl;
        cout << "Suddenly, a ghostly figure appears before you! What do you do?" << endl << endl;
        cout << " 1. Fight!" << endl;
        cout << " 2. Ask for help" << endl;
        cout << " 3. Try to run back to the entrance" << endl;
        cout << " 4. Hide behind a bookshelf" << endl << endl;
        cin >> library;

        switch (library) 
        {
        case kFight:
            cout << "You dash back to the entrance, but the door slams shut before you can reach it." << endl;
            cout << "The ghost’s laughter echoes behind you as the library seals itself. You’re trapped and bitten." << endl;
            cout << "GAME OVER." << endl;
            break;

        case kAsk:
            cout << "The ghost floats closer, but you bow your head and ask for its guidance." << endl;
            cout << "Surprisingly, it smiles and points to an old, dusty book on the shelf." << endl;
            cout << "The book contains secrets of the temple, including a map to its hidden treasure. You now have valuable knowledge!" << endl;
            cout << "YOU WON THE GAME ! " << endl;
            break;

        case kTryToRun:
            cout << "You turn to flee, sprinting towards the entrance of the library. As you approach, the grand door begins to close on its own." << endl;
            cout << "The ghost’s eerie laughter echoes around you, and the cold air grows thicker. The door is about to slam shut!" << endl;
            cout << "GAME OVER." << endl;
            break;

        case kHide:
            cout << "You quickly duck behind a massive bookshelf, holding your breath as the ghost floats closer." << endl;
            cout << "The eerie whispers fill the room as the ghost searches for you. You crouch in the shadows, trying to stay as still as possible." << endl;
            cout << "The ghost pauses in front of the bookshelf, but then drifts away, unable to find you. You are safe!" << endl;
            cout << "YOU WON THE GAME ! " << endl;
            break;

        default:
            cout << "Invalid choice, please choose between 1-4." << endl;
            break;
        }
        break;
    }

    case kSouth:
    {
        constexpr int kAttack = 1, kAsk = 2, kHide = 3, kRun = 4;
        int garden;
        cout << "You step into the Garden of Shadows, where twisted vines and dark flowers grow in silence. " << endl;
        cout << "The air is thick with mist, and you sense something watching you from the shadows. " << endl;
        cout << "A figure emerges, cloaked in darkness.What do you do ? " << endl << endl;
        cout << " 1. Attack the figure before it attacks you. " << endl;
        cout << " 2. Ask who the figure is. " << endl;
        cout << " 3. Hide behind the plant. " << endl;
        cout << " 4. Run back to the entrance. " << endl << endl;
        cin >> garden;

        switch (garden)
        {
        case kAttack:
            cout << "You charge at the figure, weapon drawn, but it effortlessly deflects your attack with a wave of its hand.Dark vines ensnare you, " << endl;
            cout << "pulling you into the shadows where you are never seen again. " << endl;
            cout << "GAME OVER. " << endl << endl;
            break;

        case kAsk:
            cout << "The figure lowers its hood, revealing an old man with glowing eyes. " << endl;
            cout << "He tells you that he is the Guardian of the Garden and warns of the dangers that lie ahead." << endl;
            cout << "YOU WON THE GAME ! " << endl << endl;
            break;

        case kHide:
            cout << "You hide behind the twisted plants, but the figure disappears into the mist. ";
            cout << "You breathe a sigh of relief.As you move deeper into the garden, the plants begin to move on their own, " << endl;
            cout << "blocking your path and catching you. " << endl;
            cout << "GAME OVER. " << endl << endl;
            break;

        case kRun:
            cout << "You panic and sprint for the entrance, but the door slams shut! " << endl;
            cout << "Ghostly figures emerge from the shadows, trapping you inside. There's no escape. " << endl;
            cout << "GAME OVER. " << endl << endl;
            break;

        default:
            cout << "Invalid choice, please choose between 1-4." << endl;
            break;
        }
        break;
    }
    case kWest:
    {
        constexpr int kFight = 1, kSearch = 2, kAttempt = 3, kRun = 4;
        int chamber;
        cout << "You step into the Chamber of Trials, where the walls are lined with ancient weapons and armor. " << endl;
        cout << "In the center of the room stands a towering figure holding a sword. A booming voice echoes: " << endl;
        cout << "Prove your worth, or perish ! What do you do ? " << endl << endl;
        cout << " 1. Fight the towering figure " << endl;
        cout << " 2. Search for a weapon in the room " << endl;
        cout << " 3. Attempt to negotiate " << endl;
        cout << " 4. Run back to the entrance " << endl << endl;
        cin >> chamber;

        switch (chamber)
        {
        case kFight:
            cout << "You draw the glowing sword and charge at the towering figure. " << endl;
            cout << "The clash of swords echoes through the chamber.After a fierce battle, " << endl;
            cout << "you manage to strike the final blow, and the figure crumbles into dust. " << endl;
            cout << "YOU WON THE GAME ! " << endl << endl;
            break;

        case kSearch:
            cout << "You quickly scan the room and find a glowing sword on the wall. " << endl;
            cout << "You grab it, and as you do, the sword pulses with power. " << endl;
            cout << "The towering figure nods approvingly, allowing you to pass into the next chamber." << endl;
            cout << "YOU WON THE GAME ! " << endl << endl;
            break;

        case kAttempt:
            cout << "You raise your hands and offer to prove your worth through knowledge rather than combat. " << endl;
            cout << "The figure tilts its head, considering your offer.It presents you with a riddle : " << endl;
            cout << "“What is always coming but never arrives ? ” " << endl;
            cout << "YOU WON THE GAME ! " << endl << endl;
            break;

        case kRun:
            cout << "You turn and dash toward the entrance, heart racing.Just as you reach the door, it swings shut! " << endl;
            cout << "The ghostly figure blocks your way, and icy dread fills the air. " << endl;
            cout << "You’re trapped and cannot escape. " << endl;
            cout << "GAME OVER. " << endl << endl;
            break;

        default:
            cout << "Invalid choice, please choose between 1-4." << endl;
            break;
        }
        break;
    }
    }

    return 0;
}
