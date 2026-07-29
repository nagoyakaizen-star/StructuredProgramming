
```plantuml
@startuml
skinparam shadowing false

state0:0
state1:1
overflag0: 0
overflag1: 1
underflag0: 0
underflag1:1


state0 --> state1 : add
state1 --> state0 : add
state0 --> state0 : Rshift
state1 --> state0 : Rshift
state1 --> underflag1: Rshift
state1 --> overflag1 : overflow
overflag1 --> overflag0 : clear
overflag0 --> overflag1:  overflow
underflag0 --> underflag1: Rshift
underflag1 --> underflag0: clear
@enduml
```plantuml

<img width="325" height="517" alt="image" src="https://github.com/user-attachments/assets/e259fe79-ddd5-43be-9c46-8a50cf29bb19" />

