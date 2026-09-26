#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Variable Declarations
    string Adj1, Adj2, Adj3, Adj4, Adj5, Adj6, Adj7;
    string Noun1, Noun2, Noun3, Noun4, Noun5;
    string Past_tense_verb1, Past_tense_verb2, Past_tense_verb3;
    string Past_tense_verb4;
    string Verb1, Verb2, Verb3;
    string Place, Clothing, Song, Food;

    // gather all user inputs
    cout << "Enter an adjective: ";
    cin >> Adj1;
    cin.ignore(99, '\n');

    cout << "Enter a noun: ";
    cin >> Noun1;
    cin.ignore(99, '\n');

    cout << "Enter a place: ";
    getline(cin, Place);
    cin.ignore(99, '\n');
    
    cout << "Enter a piece of clothing: ";
    getline(cin, Clothing);
    cin.ignore(99, '\n');
    
    cout << "Enter an adjective: ";
    cin >> Adj2;
    cin.ignore(99, '\n');
    
    cout << "Enter an adjective: ";
    cin >> Adj3;
    cin.ignore(99, '\n');
    
    cout << "Enter an adjective: ";
    cin >> Adj4;
    cin.ignore(99, '\n');
    
    cout << "Enter an adjective: ";
    cin >> Adj5;
    cin.ignore(99, '\n');

    cout << "Enter a song title: ";
    getline(cin, Song);
    cin.ignore(99, '\n');
    
    cout << "Enter a food: ";
    getline(cin, Food);
    cin.ignore(99, '\n');
    
    cout << "Enter an adjective: ";
    cin >> Adj6;
    cin.ignore(99, '\n');
    
    cout << "Enter a past tense verb: ";
    cin >> Past_tense_verb1;
    cin.ignore(99, '\n');

    cout << "Enter a noun: ";
    cin >> Noun2;
    cin.ignore(99, '\n');
    
    cout << "Enter a noun: ";
    cin >> Noun3;
    cin.ignore(99, '\n');
    
    cout << "Enter a past tense verb: ";
    cin >> Past_tense_verb2;
    cin.ignore(99, '\n');
    
    cout << "Enter a past tense verb: ";
    cin >> Past_tense_verb3;
    cin.ignore(99, '\n');
    
    cout << "Enter a noun: ";
    cin >> Noun4;
    cin.ignore(99, '\n');
    
    cout << "Enter a past tense verb: ";
    cin >> Past_tense_verb4;
    cin.ignore(99, '\n');
    
    cout << "Enter a noun: ";
    cin >> Noun5;
    cin.ignore(99, '\n');
    
    cout << "Enter a verb: ";
    cin >> Verb1;
    cin.ignore(99, '\n');
    
    cout << "Enter a verb: ";
    cin >> Verb2;
    cin.ignore(99, '\n');
    
    cout << "Enter a verb: ";
    cin >> Verb3;
    cin.ignore(99, '\n');
    
    cout << "Enter an adjective: ";
    cin >> Adj7;
    cin.ignore(99, '\n');
    
    cout << endl;
    
    // Output the Mad-Lib
    cout << "It was a " << Adj1 << " summer day. " << Noun1 
         << " and I" << endl;
    cout << "was excited to go camping at " << Place 
         << ". It was" << endl;
    cout << "my first time going there. I packed my favorite " << endl;
    cout << Clothing << ". It is " << Adj2 << " and " 
         << Adj3 << ". Perfect for" << endl;
    cout << "camping! On the road we went in our " << Adj4 
         << " " << Adj5 << endl;
    cout << "van! We were listening to " << Song << " all the" << endl;
    cout << "way down. The drive was about 5 hours, but it was so worth it." 
         << endl;
    cout << endl;
    cout << "When we got there, we unpacked the van. I could smell " 
         << Food << endl;
    cout << "being cooked. It smelled " << Adj6 << ". I " 
         << Past_tense_verb1 << " to the" << endl;
    cout << "room I was staying in with my " << Noun2 
         << ". The next thing I knew," << endl;
    cout << Noun3 << " came and " << Past_tense_verb2 
         << " on the bed. I heard my mom" << endl;
    cout << "scream, \"Get off the bed!\" I " << Past_tense_verb3 
         << " outside. I saw " << Noun4 << "." << endl;
    cout << "It was " << Noun5 << ". Over the next few days, I got to " 
         << Verb1 << "," << endl;
    cout << Verb2 << ", and " << Verb3 << ". My camping trip was " 
         << Adj7 << "." << endl;

    return 0;
}