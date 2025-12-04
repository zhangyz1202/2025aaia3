// week13-1.cpp 聖誕倒數寫程式Advent of Code 2025 第1天第1題
// Moodle 點擊 adventofcode.com 網址 可看到黑底白字，可以寫程式
// 在 LeetCode 的 My playground 我的遊戲場
// LeetCode 幫你把 #include 全部加好了，不用寫
// 右下角 stdin 可貼上程式 Input
int main() {
    char c; // 字母，對應方向 L左轉 R右轉
    int d; // 數字，要轉動幾格
    int now = 50; // 一開始的密碼錶，指向50
    int ans = 0;
    while ( cin >> c >> d) { // 一直讀資料: 讀自母、讀數字
        //if(c=='L') cout << "往左轉" << d << "格\n";
        //if(c=='R') cout << "往右轉" << d << "格\n";
        if(c=='L') now = now - d; // 減掉
        if(c=='R') now = now + d; // 加上

        now = (now%100 + 100) % 100; // 太大的、太小的，都限制在 0~99間
        //cout << "現在的刻度是: " << now << "\n";
        if (now==0) ans++; // 轉動時， 停在0的地方(我們的通關密碼)
    }
    cout << "答案是: " << ans;
}
