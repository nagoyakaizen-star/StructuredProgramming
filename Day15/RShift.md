
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
