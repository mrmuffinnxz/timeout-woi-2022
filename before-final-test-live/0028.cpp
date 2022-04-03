#include<bits/stdc++.h>
using namespace std;

struct Team{
    string name;
    int score;
    int shoot;
    int shooted;
};

bool cmp(struct Team a, struct Team b){
    if(a.score == b.score) {
        if((a.shoot - a.shooted) == (b.shoot - b.shooted)) {
            return a.shoot > b.shoot;
        }
        return (a.shoot - a.shooted) > (b.shoot - b.shooted);
    }
    return a.score > b.score;
}   

main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    struct Team teams[4];
    for(int i=0; i<4; i++) {
        cin >> teams[i].name;
        teams[i].score = 0;
        teams[i].shoot = 0;
        teams[i].shooted = 0;
    }

    int result[4][4];
    for(int i=0; i<4; i++) {
        for(int j=0; j<4; j++) {
            cin >> result[i][j];
        }
    }

    for(int i=0; i<4; i++) {
        for(int j=i+1; j<4; j++) {
            if(result[i][j] > result[j][i]) {
                teams[i].score += 3;
            } else if(result[i][j] < result[j][i]) {
                teams[j].score += 3;
            } else {
                teams[i].score++;
                teams[j].score++;
            }
            teams[i].shoot += result[i][j];
            teams[i].shooted += result[j][i];
            teams[j].shoot += result[j][i];
            teams[j].shooted += result[i][j];
        }
    }

    sort(teams, teams+4, cmp);

    for(struct Team t : teams) {
        cout << t.name << " " << t.score << "\n";
    }
}

