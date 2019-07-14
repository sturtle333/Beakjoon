Readme
======

PS 코딩 기록.

2019년 초 즈음 시작.

목록
------
1.ATM

#### 문제
>인하은행에는 ATM이 1대밖에 없다. 지금 이 ATM앞에 N명의 사람들이 줄을 서있다. 사람은 1번부터 N번까지 번호가 매겨져 있으며, i번 사람이 돈을 인출하는데 걸리는 시간은 Pi분이다.
사람들이 줄을 서는 순서에 따라서, 돈을 인출하는데 필요한 시간의 합이 달라지게 된다. 예를 들어, 총 5명이 있고, P1 = 3, P2 = 1, P3 = 4, P4 = 3, P5 = 2 인 경우를 생각해보자. [1, 2, 3, 4, 5] 순서로 줄을 선다면, 1번 사람은 3분만에 돈을 뽑을 수 있다. 2번 사람은 1번 사람이 돈을 뽑을 때 까지 기다려야 하기 때문에, 3+1 = 4분이 걸리게 된다. 3번 사람은 1번, 2번 사람이 돈을 뽑을 때까지 기다려야 하기 때문에, 총 3+1+4 = 8분이 필요하게 된다. 4번 사람은 3+1+4+3 = 11분, 5번 사람은 3+1+4+3+2 = 13분이 걸리게 된다. 이 경우에 각 사람이 돈을 인출하는데 필요한 시간의 합은 3+4+8+11+13 = 39분이 된다.
줄을 [2, 5, 1, 4, 3] 순서로 줄을 서면, 2번 사람은 1분만에, 5번 사람은 1+2 = 3분, 1번 사람은 1+2+3 = 6분, 4번 사람은 1+2+3+3 = 9분, 3번 사람은 1+2+3+3+4 = 13분이 걸리게 된다. 각 사람이 돈을 인출하는데 필요한 시간의 합은 1+3+6+9+13 = 32분이다. 이 방법보다 더 필요한 시간의 합을 최소로 만들 수는 없다.
줄을 서 있는 사람의 수 N과 각 사람이 돈을 인출하는데 걸리는 시간 Pi가 주어졌을 때, 각 사람이 돈을 인출하는데 필요한 시간의 합의 최솟값을 구하는 프로그램을 작성하시오.

#### 입력
>첫째 줄에 사람의 수 N(1 ≤ N ≤ 1,000)이 주어진다. 둘째 줄에는 각 사람이 돈을 인출하는데 걸리는 시간 Pi가 주어진다. (1 ≤ Pi ≤ 1,000)

#### 출력
>첫째 줄에 각 사람이 돈을 인출하는데 필요한 시간의 합의 최솟값을 출력한다

#### 예제 입력
```
5
3 1 4 3 2
```
#### 예제 출력
```
32
```
##### 문제 유형: 그리디 알고리즘
##### 문제를 만든 사람: Beakjoon

******

1.동전0

#### 문제
>준규가 가지고 있는 동전은 총 N종류이고, 각각의 동전을 매우 많이 가지고 있다.
동전을 적절히 사용해서 그 가치의 합을 K로 만들려고 한다. 이때 필요한 동전 개수의 최솟값을 구하는 프로그램을 작성하시오.

#### 입력
>첫째 줄에 N과 K가 주어진다. (1 ≤ N ≤ 10, 1 ≤ K ≤ 100,000,000)
둘째 줄부터 N개의 줄에 동전의 가치 Ai가 오름차순으로 주어진다. (1 ≤ Ai ≤ 1,000,000, A1 = 1, i ≥ 2인 경우에 Ai는 Ai-1의 배수)

#### 출력
>첫째 줄에 K원을 만드는데 필요한 동전 개수의 최솟값을 출력한다.

#### 예제 입력
```
10 4200
1
5
10
50
100
500
1000
5000
10000
50000
```
#### 예제 출력
```
6
```

#### 예제 입력
```
10 4790
1
5
10
50
100
500
1000
5000
10000
50000
```
#### 예제 출력
```
12
```

##### 문제 유형: 그리디 알고리즘
##### 문제를 만든 사람: Beakjoon

******

1.N과 M (1)

#### 문제
>자연수 N과 M이 주어졌을 때, 아래 조건을 만족하는 길이가 M인 수열을 모두 구하는 프로그램을 작성하시오.
- 1부터 N까지 자연수 중에서 중복 없이 M개를 고른 수열

#### 입력
>첫째 줄에 자연수 N과 M이 주어진다. (1 ≤ M ≤ N ≤ 8)

#### 출력
>한 줄에 하나씩 문제의 조건을 만족하는 수열을 출력한다. 중복되는 수열을 여러 번 출력하면 안되며, 각 수열은 공백으로 구분해서 출력해야 한다.
수열은 사전 순으로 증가하는 순서로 출력해야 한다.

#### 예제 입력
```
3 1
```
#### 예제 출력
```
1
2
3
```

#### 예제 입력
```
4 2
```
#### 예제 출력
```
1 2
1 3
1 4
2 1
2 3
2 4
3 1
3 2
3 4
4 1
4 2
4 3
```

#### 예제 입력
```
4 4
```
#### 예제 출력
```
1 2 3 4
1 2 4 3
1 3 2 4
1 3 4 2
1 4 2 3
1 4 3 2
2 1 3 4
2 1 4 3
2 3 1 4
2 3 4 1
2 4 1 3
2 4 3 1
3 1 2 4
3 1 4 2
3 2 1 4
3 2 4 1
3 4 1 2
3 4 2 1
4 1 2 3
4 1 3 2
4 2 1 3
4 2 3 1
4 3 1 2
4 3 2 1
```

##### 문제 유형: 브루트 포스
##### 문제를 만든 사람: Beakjoon

******

1.달달함이 넘처 흘러

#### 문제
>냉장고에서 맛있게 숙성되고 있는 마카롱은 심심한 나머지 새로운 수 체계를 생각해냈다. 마카롱은 이를 케이크 수라고 이름 붙이고, 다음과 같이 정의했다.
케이크 수는 3개의 자연수 x, y, z로 이루어진 순서쌍이다. (자연수는 1 이상의 정수를 의미한다)
케이크 수 a는 (a.x, a.y, a.z)와 같이 나타낼 수 있다.
또한 마카롱은 케이크 수들을 비교하기 위해 등호 "="도 새로 정의했다.
- 케이크 수 a, b에 대하여, a = b라는 것은 다음과 같다.
- a.x = b.x, a.y = b.y 그리고 a.z = b.z를 동시에 만족한다.
아직 끝나지 않았다. 이 케이크 수는 기존의 수와 다르게 매우 특이한 연산을 적용할 수 있다. 연산의 이름은 🍰이고 다음과 같이 정의된다!

![달달1](https://upload.acmicpc.net/241defcd-0b6c-461f-b354-a2435f3ba56c/-/crop/1549x1071/0,0/-/preview/)

>SCCC의 회장 욱제는 케이크 수를 이용해 문제를 만들기로 했다. 마카롱과 욱제를 기쁘게 하기 위해서 문제를 풀어주자! 욱제가 만든 문제는 다음과 같다.
케이크 수 a, c 가 주어졌을 때, 다음을 만족하는 케이크 수 b를 계산하자.
a 🍰 b = c
a, c는 b가 항상 유일하게 존재하도록 주어진다.

#### 입력
>첫째 줄에 케이크 수 a를 구성하는 자연수 a.x, a.y, a.z 가 차례대로 주어진다. (1 ≤ a.x, a.y, a.z ≤ 100)
둘째 줄에 케이크 수 c를 구성하는 자연수 c.x, c.y, c.z 가 차례대로 주어진다. (1 ≤ c.x, c.y, c.z ≤ 100)

#### 출력
>문제의 조건을 만족하는 b.x, b.y, b.z를 하나의 공백을 사이에 두고 차례대로 출력한다.
b는 1 ≤ b.x, b.y, b.z ≤ 100 이고 반드시 유일하게 존재한다.

#### 예제 입력
```
15 16 17
19 32 90
```
#### 예제 출력
```
2 2 75
```

#### 예제 입력
```
15 8 15
22 8 22
```
#### 예제 출력
```
7 1 7
```

##### 문제 출처: 숭실대 2019 SCON A번
##### 문제를 만든 사람: cake_monotone

******

1.팬덤이 넘쳐흘러

#### 문제
>선물 포장 공장을 말아먹은 욱제는 계곡에서 백숙을 파느라 학교에 자주 가지 못한다. 하지만 월클의 인생은 피곤한 법! 욱제는 지금처럼 힘든 시기에도 자신을 기다리는 5조5억명의 열렬한 팬들을 위해 가끔씩 학교에 가 줘야 한다. 욱제는 백숙이 끓는 걸 지켜봐야 해서 가게를 오래 비울 수 없다. 그래서 욱제는 한 번 학교에 간 뒤 최소 시간동안 머물다가 모든 팬들과 한 번씩 인사를 하고 학교를 떠나려고 한다.
욱제는 임의의 시각에 학교에 오거나 학교를 떠날 수 있고, 단 한 번의 왕복만 한다. 동시에 여러 팬들에게 인사를 끝낼 수도 있다. 욱제는 잘생겨서 인사하면 팬들이 심쿵사로 바로 쓰러지기 때문에 인사를 하는데 소요되는 시간은 0이라고 하자.

![팬덤2](https://upload.acmicpc.net/481b6e46-5c87-4a4b-affc-1115ace572ab/-/preview/)

>예를 들어 3명의 팬 A, B, C가 학교에 머무르는 시간이 <그림 1>과 같다고 하자. 이 경우 시각 2에 3명의 팬이 모두 학교에 있으므로, 욱제는 시각 2에 학교에 와서 3명에게 동시에 인사를 하고 바로 가게로 돌아갈 수 있다. 시각 3이나 4도 마찬가지이다. 이때 욱제가 학교에 머무는 시간의 총합은 0이다.

![팬덤1](https://upload.acmicpc.net/1b246d11-2548-47c6-8a59-b7f699af1c9c/-/preview/)

>다른 예로 2명의 팬 A와 B가 학교에 있는 시간이 <그림 2>와 같다고 하자. 욱제는 시각 4부터 시각 5까지 학교에 머물면서 시각 4에 A와, 시각 5에 B와 인사를 하고 학교를 떠날 수 있다. 이때 욱제가 학교에 머무는 시간은 1이다.
백숙집 주방 이모 효빈이는 N명의 팬들이 학교에 머무르는 시간 [s, e]들을 몰래 조사했다. 효빈이는 욱제가 학교에 머무르는 시간을 계산해서 그 시간동안 땡땡이를 치기로 했다. 효빈이와 함께 욱제가 학교에 머무르는 최소의 시간을 계산해 보자!

#### 입력
>첫째 줄에 욱제의 열렬한 팬의 수 N이 주어진다. (1 ≤ N ≤ 100,000)
둘째 줄부터 N개의 줄에 걸쳐, 각 줄에 정수 si, ei (1 ≤ si ≤ ei ≤ 100,000)가 순서대로 주어진다. 이는 i번째 팬이 학교에 있는 시간 [si, ei]을 의미한다.

#### 출력
>욱제가 학교에 머물러야 하는 최소의 시간을 출력한다.

#### 예제 입력
```
3
2 5
1 4
2 4
```
#### 예제 출력
```
0
```

#### 예제 입력
```
2
1 4
5 6
```
#### 예제 출력
```
1
```

##### 문제 출처: 숭실대학교 2019 SCON F번
##### 문제를 만든 사람: king7282
