#include <stdio.h>

int main() {
	int N;
    scanf("%d", &N);

    int cumulative_score1 = 0, cumulative_score2 = 0;
    int max_lead = 0, leader = 0;

    for (int i = 0; i < N; i++) {
        int score1, score2;
        scanf("%d %d", &score1, &score2);

        cumulative_score1 += score1;
        cumulative_score2 += score2;

        int current_lead = cumulative_score1 - cumulative_score2;

       
        if (current_lead < 0) {
            current_lead = -current_lead; 
        }

        if (current_lead > max_lead) {
            max_lead = current_lead;
            leader = (cumulative_score1 > cumulative_score2) ? 1 : 2;
        }
    }

    printf("%d %d\n", leader, max_lead);

    return 0;

}

