Stack을 일상생활에 비유 하자면,
큰 시장에서 물건이 쌓여져있는 모습을 생각해보자
소비자는 맨위에 있는 물건을 구매해 가져갈것이고 상점주인이 
추가 적으로 들어온 물건은 쌓여져 있는 물건 맨위에 더 놓게 될것이다
결론적으로 제일 마지막에 들어온 물건이 제일 먼저 소비자에게 선택되는 것과 같은 역할을 하는 것이 stack이다 

stack도 하나의 배열로서 제일 위에 있는 부분에서 삭제 혹은 추가가 이루어지는 구조를 stack구조라고 합니다. 또한 이를 LIFO(last in first out)데이터 구조라고 부릅니다 

stack과 연관되어있는 두개의 연산이 있습니다.
push연산은 stack에 제일 상단에 item을 추가하는 동작을 하고
pop연산은 stack의 제일 상단에 있는 item을 삭제 합니다 

따라서 stack은 확대축소 할수 있는 동적데이터 구조라고 부릅니다

Stack의 사이즈가 N이라고 했을때 push연산으로 item을 추가하다 사이즈N과
같게 되면 stack의 상태는 가득찬 상태가 되는 것이다(stack full)
반대로 pop연산을 계속 해서 진행을 하다 더이상 pop연산이 진행 되지 않는
시점에는 stack의 저장공간이 비어있는상태라고 합니다 (stack empty)


push()
	step
	1. if (Top >= N)
		printf("stack full"\n);
		break;

		top = top +1;

		stack[top] = item;
		
		break;
pop()
	step

	1. if(top == 0)
		printf("stack empty");

		else
		item = stack[top];
		top = top -1;
		break;

	
