# Stacks, Queues - LIFO, FIFO

![img](https://lh3.googleusercontent.com/PZ4FM_ju7l-WXsTrXzDYbGzEhUKBO80q5PWqUWNUE-MPEdAVwM92w3xlvwISbGkNm1ZhK7K-BkBpNbL35YdJWoK6hPRn00bAZuS1gGZAyoHAJNUuoYTmrQ0usE5hnmtBhuDODJkIDhbc_WS_Sck9XmXrxxbWzdPOByPtMsX9SQsFsnB4ReemhTqW5dJT1cK8hRVAkU-Tfso6uofGPOQCySh5hIQMcciGXGjj1t__QLg9QydNnOSNOjU09AnPhkMrRgYXqIHrSjexeebmTe9GtzpZ_pgdh1MhlHRck6ss2HsxJmN3QNwrBjp78p9_cyp8eMfJGlGL8O-IyNylBAc5DWqFECZosT3v5gsgcu0ONNWZiO2g5tzouazOxlNmGgFpysLO6biHfszTcpn3OyUD710Qi2OPG9-9y0t0TB7julwzBn4zjtLdsqow0PW7EAudnjz6JMRkpDbDhYoAlsDFkXFKUBv78WhBRCBYEtNKeagLaIqJ7XNV6VC8wQspni_5LjQQUT5Ca6YukjMqccd_pOGpDaCODNp2hpNdXs_SqTtPBX_4PwPDNTHjkexRA3P81ngGAKd-GxRnvknx-Pm1Ly0pyYsQe80WsIoe-_DnPR66dQZv3avMf53U9OU381I9YIe8y8k5d2w040pvVO0QRIKM0xe0cR2R-CHuAwTcpk_1spuidjkAx3PIkJe8kEHTLO621MiRsNkvqPpk-7_MyvTHQ3aVmPV_VW2syUDqHIdYHx3plMLKhx_Awd5_=w681-h482-no?authuser=0>)

## Stacks
A stack is a linear data structure in which elements can be inserted and deleted only from one
side of the list, called the top. A stack follows the LIFO (Last In First Out) principle, i.e., the element
inserted at the last is the first element to come out. The insertion of an element into stack is
called push operation, and deletion of an element from the stack is called pop operation. In stack we
always keep track of the last element present in the list with a pointer called top.

![](https://lh3.googleusercontent.com/YU6XhqW2kYZLBt8z2TfCF6r_fXuy5fk0ojd0K_tPp2KWexE2O967munGQBp2_zcqnfxzeNwsrUg1bbg-An4Kmqb6WdX3VqUr8Qr7mvBljswbziRVqHZ_fv__4VKvzf6IWNyVRrORRwcD3tnNdJpZVT02dY7Ls8hu2efh64GuKqSE9z_jVyd_UAjvw4NDkiuPAfGpvLAz75J-ll_8hUDG7o_fbblFIEYHwN5GELB1il7Jvo93pW_oTGtcpC8XafsyKGA0Ga5hj7GyUG0KaLynpSgmmzctNfqxtcRZWiHgpiL6R4BHeY6WkA9QpQN3blX9dknUrCrXwWiYi1ADrprUG3dsiBiglUl14czYEgh6k5y2e1LCnK_1hdaEyJrdazWmpn5FwKZnY78VKi59Mh-5kn8VxrW2P4ZX673RIK7QA8P1mBrWZrnaf2jsaiFJ2UZxWT5IB-gAzHMk8NAZOOSqTygsZoA8SCc-oIVKvXWHwWA4ssBchbIJBYG3MoamI2tC-rvIDg0jX6bvxFbDp7p8uvrPaCy0khowRfq9sjLeyMWVWGMEARqDi3HUqL1v966orvq8TDIGYD4rlXhbU6QIjjUXnyd-KRUbjklrKyd81e287pf3NBYoDRF8w_CXihQBCjwMrkCFHKId065dDQIW23Ix8KAwReY1OjpWAIfuaWa7-wv_Wv2WIQJFRya7WgAPt_ZoSTnflqEk_ISCnDUnEabe2GNdtDKYO0uh31Fb7ViPicgBjkvdibPHE8D3=w700-h400-no?authuser=0)

## Queues
A queue is a linear data structure in which elements can be inserted only from one side of the
list called rear, and the elements can be deleted only from the other side called the front. The queue data
structure follows the FIFO (First In First Out) principle, i.e. the element inserted at first in the list, is the
first element to be removed from the list. The insertion of an element in a queue is called
an enqueue operation and the deletion of an element is called a dequeue operation. In queue we always
maintain two pointers, one pointing to the element which was inserted at the first and still present in the
list with the front pointer and the second pointer pointing to the element inserted at the last with
the rear pointer.

![](https://lh3.googleusercontent.com/5t42Epmge8aPkFpgvByqVkXTIoGYhDyPhUPRAMoQDyieFEUpET5h809EZub03BVbK7nLwIX8T5xE8vHEpAP4MFhdHsc3O-lbTcBUmom4C_1o4CcXwSYxAqWQIkXpSLbg23bopBwGEgOTVoFwa8mhL7YCPhnlQHs-vBcvDl_8P8rjD1yTgXHksdf6mViw141BxopeVkX2yhhreReziUj7Jot9clrzvfgT5z1z5CU3fSraEaJGWUpgG7cy-YDiYUzgXwSVeUZdUmu3w6GIzbjLHWH2GxWOxOfFRq-H5Qr__vGz25s-6_KYoEVczEacYSYkqhT463tfaTbUcjcOA_ejhkiUKpHAmMbXLMDjMLhCVFeZss6xTuCD6VpIyuzYe_pg2s5GVprDxMc40ANpbFmEUuTtWOv44F4J53eOewGnSs6ctt-q-mtmB3ezLNzxWQlhGINq2k8oS0RTJDyIJ_q8bc4vncdd4xKLEPMlz0DTzPdRXeDOfSV4-QCfXZLZRPvr_r9ToZaeIanKnb7yazlRlPh_bJoVI1SOjy6fNN1NSrOHJHASwBN6RerrzQn1dMPLegKyied52eCnSf-5tsIzOcle3ffLCIUaVAFRPgQJFTfJAqxnxNlWRe_L7Tf13nOIiqfbw1WY2p-TOuCyYRQvajvSu0wpVSKt-ShkAXJbbDgShjoG_JM3CDojpd0Co6sG2Toooxp-lZx3I_AMeEZMpI1jV-KMKUBnT_FXlHVgBF1Ic9UFPDtgaC0Rwo9Y=w700-h400-no?authuser=0)

## Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

### General
- What do LIFO and FIFO mean
- What is a stack, and when to use it
- What is a queue, and when to use it
- What are the common implementations of stacks and queues
- What are the most common use cases of stacks and queues
- What is the proper way to use global variables

### Requirements
General
- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All your files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You allowed to use a maximum of one global variable
- No more than 5 functions per file
- You are allowed to use the C standard library
- The prototypes of all your functions should be included in your header file called monty.h
- Don’t forget to push your header file
- All your header files should be include guarded
- You are expected to do the tasks in the order shown in the project

## Compilation & Output
### Your code will be compiled this way:
**$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o monty***
- Any output must be printed on stdout
- Any error message must be printed on stderr

### The Monty language
Monty 0.98 is a scripting language that is first compiled into Monty byte codes (Just like Python). It relies on a unique stack, with specific instructions to manipulate it. The goal of this project is to create an interpreter for Monty ByteCodes files.

### Monty byte code files

Files containing Monty byte codes usually have the .m extension. Most of the industry uses this standard but it is not required by the specification of the language.

## Tasks 📑
### Task0
- Implement the push and pall opcodes.

***The push opcode***

The opcode push pushes an element to the stack.

Usage: push <int>
where <int> is an integer
if <int> is not an integer or if there is no argument given to push, print the error message L<line_number>: usage: push integer, followed by a new line, and exit with the status EXIT_FAILURE
where is the line number in the file
You won’t have to deal with overflows. Use the atoi function
  
***The pall opcode***

The opcode pall prints all the values on the stack, starting from the top of the stack.

Usage pall
Format: see example
If the stack is empty, don’t print anything

### Task1
- Implement the pint opcode.

***The pint opcode***

The opcode pint prints the value at the top of the stack, followed by a new line.

Usage: pint
If the stack is empty, print the error message L<line_number>: can't pint, stack empty, followed by a new line, and exit with the status EXIT_FAILURE
  
### Task2
- Implement the pop opcode.

***The pop opcode***

The opcode pop removes the top element of the stack.

Usage: pop
If the stack is empty, print the error message L<line_number>: can't pop an empty stack, followed by a new line, and exit with the status EXIT_FAILURE
  
### Task3
- Implement the swap opcode.

***The swap opcode***

The opcode swap swaps the top two elements of the stack.

Usage: swap
If the stack contains less than two elements, print the error message L<line_number>: can't swap, stack too short, followed by a new line, and exit with the status EXIT_FAILURE

### Task4
- Implement the add opcode.

***The add opcode***

The opcode add adds the top two elements of the stack.

Usage: add
If the stack contains less than two elements, print the error message L<line_number>: can't add, stack too short, followed by a new line, and exit with the status EXIT_FAILURE
The result is stored in the second top element of the stack, and the top element is removed, so that at the end:
The top element of the stack contains the result
The stack is one element shorter
  
### Task5
- Implement the nop opcode.

***The nop opcode***

The opcode nop doesn’t do anything.

Usage: nop
  
## Authors
- Diana Marcela Bnaguera Villalobo | dianabanguera
- Yon Anderson Roa | yonroa
