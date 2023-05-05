# Memory Allocation

## malloc

- 메모리 할당

```c
#include <stdlib.h>

void *malloc(size_t size);
```

- example

```c
char *ptr;
ptr = malloc(sizeof(char) * 100);
```

<br/>

## calloc

- 메모리 할당과 초기화

```c
#include <stdlib.h>

void *calloc(size_t nmemb, size_t size);
```

- nmemb: 배열 요소의 개수
- size: 각 배열 요소의 크기(바이트)

- example: 요소가 10개이고 각 요소의 크기가 20 바이트인 배열을 저장할 수 있는 메모리 할당

```c
char* ptr
ptr = calloc(10, 20);
```

<br/>

## realloc

- 메모리 추가 할당

```c
#include <stdlib.h>

void *realloc(void *ptr, size_t size);
```

- example

```c
char *ptr, *new;
ptr = malloc(sizeof(char) * 100);
new = realloc(ptr, 100);
```

<br/>

## free

- 메모리 해제
- 형식

```c
#include <stdlib.h>

void free(void *ptr);
```

<br/>
