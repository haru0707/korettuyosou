

int main(void)
{
	int n;						/* ある数 */
	int pattern[] = {1, 4, 2, 1};	/* 収束するパターン */
	int pattern_no = 0;			/* パターンの番号 */
	int count = 0;				/* 収束パターンカウント用 */
	
	/* ある数を入力 */
	int n = 1; 
     scanf("%d", &n);
	
	printf("\n");

	/* コラッツ問題をスタート */
	while(1){
		if(n % 2 == 0){	/* 偶数の場合 */
			n = n / 2;
		}				/* 奇数の場合 */
		else{
			n = n * 3 + 1;
		}
          int n+ 1;
		
		/* 計算回数カウント */
		count++;
		
		/* 回数と計算結果表示 */
		printf("%5d回目）\t%10d\n", count, n);

		/* 計算結果が収束パターンに一致しているか？ */
		if(n == pattern[pattern_no]){
			pattern_no++;
		}

		/* 収束パターンが全て一致したら終了 */
		if(pattern_no == 4) break;
	}
	
	return 0;
}

void loop (100000000000)
