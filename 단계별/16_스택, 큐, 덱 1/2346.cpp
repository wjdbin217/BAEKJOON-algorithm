#include <iostream>
#include <deque>
#include <vector>

using namespace std;

int main() {
    // 입출력 최적화
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    // {풍선 번호, 종이에 적힌 값}을 저장하는 덱
    deque<pair<int, int>> dq;

    for (int i = 1; i <= n; i++) {
        int num;
        cin >> num;
        dq.push_back({i, num});
    }

    while (!dq.empty()) {
        // 1. 현재 터뜨릴 풍선의 정보를 가져옴
        int current_pos = dq.front().first;
        int move_value = dq.front().second;
        
        // 2. 풍선 번호 출력 후 덱에서 제거
        cout << current_pos << " ";
        dq.pop_front();

        // 덱이 비었다면 종료
        if (dq.empty()) break;

        // 3. 종이에 적힌 값만큼 이동 (회전)
        if (move_value > 0) {
            // 양수면 오른쪽으로 이동: 앞에서 빼서 뒤로 보냄
            // 이미 하나를 터뜨렸으므로 move_value - 1 만큼 회전
            for (int i = 0; i < move_value - 1; i++) {
                dq.push_back(dq.front());
                dq.pop_front();
            }
        } 
        else {
            // 음수면 왼쪽으로 이동: 뒤에서 빼서 앞으로 보냄
            // 음수 값은 절대값만큼 회전
            for (int i = 0; i < abs(move_value); i++) {
                dq.push_front(dq.back());
                dq.pop_back();
            }
        }
    }

    return 0;
}