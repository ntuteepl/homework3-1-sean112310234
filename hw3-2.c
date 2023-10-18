include <stdio.h>

int main() {
    int s1, d1, s2, d2, s3, d3;
    
    // 輸入三筆訂單的出發時間和返回時間
    printf("請輸入三筆訂單的出發時間和返回時間（s1 d1 s2 d2 s3 d3）：");
    scanf("%d %d %d %d %d %d", &s1, &d1, &s2, &d2, &s3, &d3);
    
    // 計算需要的遊覽車數量
    int cars_needed = 1;  // 至少需要一輛遊覽車
    
    // 檢查第二筆訂單是否與第一筆訂單時間衝突
    if (s2 < d1) {
        cars_needed++;  // 需要另外一輛車
    }
    
    // 檢查第三筆訂單是否與前兩筆訂單時間衝突
    if (s3 < d1 || s3 < d2) {
        cars_needed++;  // 需要另外一輛車
    }
    
    printf("公司至少需要 %d 輛遊覽車才足以應付需求。\n", cars_needed);
    
    return 0;
}

