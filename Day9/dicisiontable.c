#include <stdio.h>
#include <time.h>

void process_with_array(int i) {
    // 配列の引数0〜7に対応する出力を配列として定義
    int table_d[8] = {0, 0, 0, 0, 3, 0, 1, 0}; // 

    // 配列からを出力
    printf("%d \n", table_d[i]);
}

int main() {
    struct timespec start, end;

    // 1. 開始時間を取得
    timespec_get(&start, TIME_UTC);

    // 測定したい処理を実行
    for (int i = 0 ;i<8;i++){
    process_with_array(i);
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
0 
0 
0 
0 
3 
0 
1 
0 
処理時間: 0 秒 と 25597 ナノ秒
処理時間（小数表示）: 0.000025597 秒



*/
