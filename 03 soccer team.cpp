#include <iostream>
using namespace std;

struct Team{
    string name;
    string pos;
    int number;
};

void readTeam(Team team[], int size){
    for(int i = 0; i < size; i++){
        
        cout << "Player name: ";
        cin >> team[i].name;

        cout << "Player number: ";
        cin >> team[i].number;

        cout << "Player position: ";
        cin >> team[i].pos;
    }
}

void replacement(Team starting[], Team reserve[], int st, int rt){
    int starting_number;
    int reserve_number;
    int aux;
    int aux2;

    cout << "Which player do you want to replace? (player number) ";
    cin >> starting_number;
    
    for (int i = 0; i < st; i++){
        if (starting[i].number == starting_number){
            aux = i;
        }
    }
    cout << "Which one do you want to replace: (player number) ";
    cin >> reserve_number;

    for (int i = 0; i < rt; i++){
        if (reserve[i].number == reserve_number){
            aux2 = i;
        }
    }
    starting[aux] = reserve[aux2];
}


void printTeam(Team team[], int size){
    for(int i = 0; i < size; i++){
        cout << team[i].pos <<  ": " << team[i].name << " - " << team[i].number << endl;
    }
}

int main(){
    int st = 2;
    int rt = 2;

    Team starting_team[st];
    Team reserve_team[rt];

    cout << " --- Starting Team --- " << endl;
    readTeam(starting_team,st);

    cout << " --- Reserve Team --- " << endl;
    readTeam(reserve_team,rt);

    cout << " --- Starting Team --- " << endl;
    printTeam(starting_team,st);

    cout << " --- Reserve Team --- " << endl;
    printTeam(reserve_team,rt);

    replacement(starting_team,reserve_team,st,rt);

    cout << " --- Current Team --- " << endl;
    printTeam(starting_team,st);

}