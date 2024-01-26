FLOWCHART 

```mermaid
graph TD
  subgraph MainFlow
    A[Welcome]
    B[Display Menu]
    C[Login]
    D[Register]
    E[Exit]
  end

  subgraph SeatReservationFlow
    F[VIP Seats]
    G[Standard Seats]
  end

  subgraph UserDetailsFlow
    H[User Details]
    I[Security Check]
    J[Forgot Password]
  end

  A -->|Display Welcome Message| B
  B -->|Show Menu Options| C
  B -->|Show Menu Options| D
  B -->|Show Menu Options| E

  C -->|Enter Credentials| I
  I -->|Check Credentials| H
  I -->|Forgot Password| J
  J -->|Security Validation| H
  H -->|Login Success| F
  H -->|Login Failure| C

  D -->|Enter User Details| B
  B -->|Registration Success| C

  E -->|Exit Program| F

  F -->|Reserve VIP Seat| F
  F -->|Show VIP Seating| F
  F -->|Display Movie Details| F

  G -->|Reserve Standard Seat| G
  G -->|Show Standard Seating| G
  G -->|Display Movie Details| G
```

PSEUDOCODE 

1. Initialize:
    - Constants: Col = 10, MaxUsers = 100
    - Structures: User
        - Fields: fullName, username, password, securityWord, age
    - Arrays: users[MaxUsers], vipSeats[3][Col], standardSeats[7][Col]

2. Main():
    a. Display Welcome Message

    b. while True:
        i. Display Menu Options
        ii. Input choice1

        iii. switch choice1:
            case 1:
                - username, password = InputCredentials()
                - if AuthenticateUser(username, password):
                    - DisplayMovieReservationMenu()
                    - choice2 = InputChoice()
                    - ReserveSeat(choice2, users[userIndex])
                - else:
                    - DisplayLoginError()
                    - HandleForgotPassword()

            case 2:
                - if userCount < MaxUsers:
                    - newUser = InputUserDetails()
                    - users[userCount] = newUser
                    - userCount++
                    - DisplayRegistrationSuccess()
                - else:
                    - DisplayRegistrationLimitReached()

            case 3:
                - DisplayExitMessage()
                - ExitProgram()

            default:
                - DisplayInvalidChoiceError()

3. MovieReservation():
    a. while True:
        i. DisplaySeatOptions()
        ii. Input seatChoice

        iii. switch seatChoice:
            case 1:
                - DisplayVIPSeatingArrangement()
                - userGenre, seatPrice = InputMovieDetails()
                - userPayment, tax = InputPayment()
                - ReserveVIPSeat(userGenre, seatPrice, userPayment, tax)

            case 2:
                - DisplayStandardSeatingArrangement()
                - userGenre, seatPrice = InputMovieDetails()
                - userPayment, tax = InputPayment()
                - ReserveStandardSeat(userGenre, seatPrice, userPayment, tax)

            case 3:
                - ExitMovieReservation()

            default:
                - DisplayInvalidChoiceError()
