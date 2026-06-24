#include <stdio.h>
#include <time.h>

void process_if(int a, int b, int c) {

    if (a==0){
        if ( b == 0){
            if (c==0){
                printf("%d, %d \n", 0, 0);
            } else {
                printf("%d, %d \n", 0, 0);
            }
        }   else {
            if (c==0){
                printf("%d, %d \n", 0, 0);
            } else {
                printf("%d, %d \n", 0, 0);
            }
        }
    } else {
        if ( b == 0){
            if (c==0){
                printf("%d, %d \n", 1, 1);
            } else {
                printf("%d, %d \n", 0, 0);
            }
        }   else {
            if (c==0){
                printf("%d, %d \n", 1, 0);
            } else {
                printf("%d, %d \n", 0, 0);
            }
        }
    }
}

int main() {
    struct timespec start, end;

    // 1. 開始時間を取得
    timespec_get(&start, TIME_UTC);

    // 測定したい処理を実行
    for (int i = 0 ;i<2;i++){
        for (int j = 0 ;j<2;j++){
            for (int k = 0 ;k<2;k++){
    process_if(i, j, k);
            }
        }
    }
    // 2. 終了時間を取得
    timespec_get(&end, TIME_UTC);

    // 3. 秒とナノ秒それぞれの差分を計算
    long diff_sec = end.tv_sec - start.tv_sec;
    long diff_nsec = end.tv_nsec - start.tv_nsec;

    // ナノ秒の引き算で繰り下がりが発生した場合の補正
    if (diff_nsec < 0) {
        diff_sec -= 1;
        diff_nsec += 1000000000;
    }

    // 秒単位にまとめて小数で表示
    double total_time = diff_sec + (double)diff_nsec / 1000000000;

    printf("処理時間: %ld 秒 と %ld ナノ秒\n", diff_sec, diff_nsec);
    printf("処理時間（小数表示）: %.9f 秒\n", total_time);

    return 0;
}
/*

0, 0 
0, 0 
0, 0 
0, 0 
1, 1 
0, 0 
1, 0 
0, 0 
処理時間: 0 秒 と 30062 ナノ秒
処理時間（小数表示）: 0.000030062 秒

*/
