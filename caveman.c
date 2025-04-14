#include <iostream>

using namespace std;

int main(){
    int option;
    while (true){
        cout << "====== Menu ======" << endl;
        cout << "Which prompt would you like translate?" << endl;
        cout << "1) Social Interactions" << endl;
        cout << "2) Sales Pitches" << endl;
        cout << "3) Budget Talks" << endl;
        cout << "4) Legal Troubles" << endl;
        cout << "5) Fatherly Advice" << endl;
        cout << "6) Exit" << endl;
        cout << "==================" << endl;
        cout << "Option: ";
        cin >> option;
        switch (option){
            case 1:
                cout << "Social Interactions" << endl;
                cout << "------" << endl;
                cout << "Original prompt:" << endl;
                cout << "Allen has mistaken me for his friend Marcus Halberstam. It seems logical because Marcus also works at P&P and in fact does the same exact thing I do and he also has a penchant for Valentino suits and Oliver Peoples glasses. Marcus and I even go to the same barber, although I have a slightly better haircut." << endl;
                cout << "------" << endl;
                cout << "Cavemanese:" << endl;
                cout << "Allen think me Marcus. Marcus work same job me do P&P. Marcus like suits and glasses. Marcus hair like me, but less good." << endl;
                break;
            case 2:
                cout << "Sales Pitches" << endl;
                cout << "------" << endl;
                cout << "Original prompt:" << endl;
                cout << "As you all know, first prize is a Cadillac Eldorado. Anybody wanna see second prize? Second prize's a set of steak knives. Third prize is you're fired." << endl;
                cout << "------" << endl;
                cout << "Cavemanese:" << endl;
                cout << "Prize one chairs on wheels. Prize two? Prize two meat knives. Prize three you go." << endl;
                break;
            case 3:
                cout << "Budget Talks" << endl;
                cout << "------" << endl;
                cout << "Original prompt:" << endl;
                cout << "The good news is Vinnie, you're not going to care cause you're gonna make so much money. That's what I get out of it. Wanna know what you get out of it? You get the ice cream, the hot fudge, the banana and the nuts. Right now I get the sprinkles, and you- if this goes through, I get the cherry. But you get the sundae, Vinny. You get the sundae." << endl;      
                cout << "------" << endl;
                cout << "Cavemanese:" << endl;
                cout << "Vinnie, you no care, you be rich. Me understand. What you get? Ice milk, cocoa, banana, nuts. Now me get sprinkles, later get cherry. But you get treat." << endl;
                break;
            case 4:
                cout << "Legal Troubles" << endl;
                cout << "------" << endl;
                cout << "Original prompt:" << endl;
                cout << "And I'll bet what you hated the most was that they identified me as a co-founder of Facebook, which I am. You better lawyer up asshole, because I'm not coming back for 30%, I'm coming back for everything." << endl;
                cout << "------" << endl;
                cout << "Cavemanese:" << endl;
                cout << "You hate that me help make book of faces. You find lawyer, me hunt all." << endl;
                break; 
            case 5:
                cout << "Fatherly Advice" << endl;
                cout << "------" << endl;
                cout << "Original prompt:" << endl;
                cout << "Because the man who makes an appearance in the business world, the man who creates personal interest, is the man who gets ahead. Be liked and you will never want. I never have to wait in line to see a buyer." << endl;
                cout << "------" << endl;
                cout << "Cavemanese:" << endl;
                cout << "Man work, man work good, man go far. Man liked, man not want. I not wait for man buying." << endl;
                break;
            case 6:
                cout << "Quit" << endl;
                cout << "------" << endl;
                cout << "Thanks for playing!" << endl;
                return 0;
            default:
                cout << "Please enter a number from 1 to 5." << endl;
                break;
        }
    }
    return 0;
}