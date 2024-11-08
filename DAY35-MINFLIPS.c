	

int main() {
	int T;
    scanf("%d", &T);
    while (T--) {
        int N;
        scanf("%d", &N);
        
        int count1 = 0;
        for (int i = 0; i < N; ++i) {
            int num;
            scanf("%d", &num);
            if (num == 1) {
                count1++;
            }
        }
        
        
        if (N % 2 != 0) {
            printf("-1\n");
        } else {
            int countNeg1 = N - count1; 
            int minOperations = abs(count1 - countNeg1) / 2;
            printf("%d\n", minOperations);
        }
    }
    return 0;

}

