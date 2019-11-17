## protected 선언과 세 가지 형태의 상속

C++의 접근제어 지시자에는 public, protected, private 세가지가 존재

```
private < protected < public
```

---

```
class Base
{
private:
	int num1;
protected:
	int num2;
public:
	int num3;
	void ShowData()
	{
		cout<<num1<<", "<<num2<<", "<<num3;
	}
}

class Derived : public Base
{
public:
	void ShowBaseMember()
	{
		cout<<num1; // 컴파일 에러
		cout<<num2;
		cout<<num3;
	}
}
```

protected로 선언된 멤버변수는 이를 상속하는 **유도클래스에서 접근이 가능하다**

기초 클래스와 이를 상속하는 유도 클래스 사이에서도 '정보은닉'은 지켜지는게 좋다



### protected 상속

protected보다 접근 범위가 넓은 멤버는 protected로 변경시켜서 상속

```
class ClassA
{
private:
	int num1;
protected:
	int num2;
public:
	int num3;
}

class ClassB : protecteed ClassA
{
접근불가능:
	int num1;
protected:
	int num2;
protected:
	int num3;
}
```



### private 상속

private 보다 접근 범위가 넓은 멤버는 private 로 변경시켜 상속

```
class ClassA
{
private:
	int num1;
protected:
	int num2;
public:
	int num3;
}

class ClassB : private ClassA
{
접근불가능:
// private:
	int num1;
접근불가능:
	int num2;
접근불가능:
	int num3;
}
```

private 상속이 이뤄진 클래스를 다시 상속할 경우, 멤버함수를 포함하여 모든 멤버가 '접근 불가'가 됨



### public 상속

public보다 접근의 범위가 넓은 멤버는 public으로 변경시켜서 상속(private을 제외한 나머지는 그냥 그대로 상속)