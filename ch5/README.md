# 그림
![](./img/echo.png)

## 요구사항
```{r, engine='bash', count_lines}
> echo hello world
hello world

```
'echo'라는 프로그램을 개발하려고 한다. 그림1에서 보는바와 같이 echo를 실행할 때 인자로'hello world'를 입력합니다. 그러면 echo 프로그램에 인자로 전달된 'hello world'가 출력되도록 하하면 됩니다.
## 구현방법
'echo'프로그램은 인자를 입력받는 경우 인자의 갯수와 인자를 저장하는 벡터에 접근할 수 있습니다. 인자를 벡터에서 읽고 인자를 구분하기 위해서 공백문자를 사이에 삽입하여 화면에 출력하도록 합니다.
# 코드
[echo command code](./echo_j.c)

# 코드설명
함수 main이 실핼될때 두개의 매개변수가 전달된다 첫번째 argc는 프로그램을 실행하기
위한 매개변수의 개수이고 두번째는 매개변수들의 모임인 문자열을 가리키는 포인터이다


예를 들어 echo 프로그램을 실행시키고 echo hello world를 입력하면 hello world가 출력된다 
echo는 두개의 매개변수를 가지고 있다. 첫번째는 argc는 프로그램을 실행하기 위한 매개변수의 개수이고 두번째는 매개변수들의 모임인 문자열을 가리키는 포인터 입니다 

변수 i는 for문의 인덱스 값으로 사용이 됩니다 
for문에서는 i가 1부터 시작하게 되는데 그이유는 echo프로그램은 자기 자신을 포함하기 때문에
argc가 적어도 1이상이 되어야 실행가능하다(1이면 매개변수가없다라는 것을 의미한다)

------
# 그림
![](./img/find.png)

## 요구사항
```{r, engine='bash', count_lines}
> a.out monkey apple banana
monkey apple banana jenny
```
'find and pointer'라는 프로그램을 개발하려고 한다. 그림1에서 처럼 인자로 'a.out monkey apple banana'를 입력하면 프로그램내에 있는 target과 비교하여 동일한 단어가 있으면 target("monkey apple banana jenny")를 출력하면 됩니다

## 구현방법 
'find and pointer'프로그램은 인자를 입력받는 경우 인자의 갯수와 인자를 저장하는 벡터에 접근하게 됩니다. 벡터의 인자들과 프로그램내에 있는 target과 비교 하여 동일한 단어가 있으면 변수를 증가시키게 되고 그 변수의 수가 입력된 인자에서 실행파일명의 이름을 제외한 나머지 인자의 수와 같다면 target을 출력하게 합니다.


## 코드
[find and pointer](./find_and_pointer.c)

## 코드설명 
'find and pointer'함수는 두개의 매개변수가 전달된다 
첫번째 argc는 입력받은 매개변수의 개수이고, 두번째는 매개변수들의 모임인 문자열을 가리키는 포인터이다

변수선언에서 i는 for문의 인덱스 값으로 사용되고, found는 비교함수 strstr를 통해 같은 단어들의 개수를 나타내는 변수로 사용된다. 그리고 target포인터변수는 입력되는 인자와 비교할 문장으로 사용되고 비교한 인자와 동일하다면 출력되게 한다

입력된 인자와 target을 비교하기위해서 for문을 사용하여 i=1부터 시작하고 되고(프로그램 본인의 입력을 제외하기위해) 매개변수의 전체의 개수보다 작을때까지 i를 1씩증가 시키며 실행된다. strstr함수를 통해 벡터의 i번째 인자와 target을 비교하게 되고 비교한 값이 NULL이 아니면(즉, 동일하다면) found를 1씩증가 시키게 된다 

증가된 found의 수와 입력된 전체인자의 개수 -1과 동일하다면 (a.out제외한 나머지) target을 출력하게 한다 
