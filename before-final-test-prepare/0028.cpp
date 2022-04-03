#include<bits/stdc++.h>
using namespace std;

struct Team {
    string name;
    int score;
    int shoot;
    int lose;
};

bool cmp(struct Team a, struct Team b) {
    return a.score > b.score || (a.score == b.score && (a.shoot - a.lose) > (b.shoot - b.lose)) || (a.score == b.score && (a.shoot - a.lose) == (b.shoot - b.lose) && a.shoot > b.shoot);
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
        teams[i].lose = 0;
    }

    int score[4][4];
    for(int i=0; i<4; i++) {
        for(int j=0; j<4; j++) {
            cin >> score[i][j];
        }
    }

    for(int i=0; i<4; i++) {
        for(int j=i+1; j<4; j++) {
            if(score[i][j] > score[j][i]) {
                teams[i].score += 3;
            }
            else if(score[i][j] < score[j][i]) {
                teams[j].score += 3;
            }
            else {
                teams[i].score += 1;
                teams[j].score += 1;
            }
            teams[i].shoot += score[i][j];
            teams[i].lose += score[j][i];
            teams[j].shoot += score[j][i];
            teams[j].lose += score[i][j];
        }
    }

    sort(teams, teams+4, cmp);

    for(struct Team t : teams) {
        cout << t.name << " " << t.score << endl;
    }
}