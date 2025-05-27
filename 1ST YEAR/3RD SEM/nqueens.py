def calcQueens(size):
    board = [-1] * size
    if queens(board, 0, size):
        return board
    else:
        return None

def queens(board, current, size):
    if current == size:
        return True
    else:
        for i in range(size):
            board[current] = i
            if noConflicts(board, current):
                if queens(board, current + 1, size):
                    return True
        return False

def noConflicts(board, current):
    for i in range(current):
        if board[i] == board[current]:
            return False
        if abs(current - i) == abs(board[current] - board[i]):
            return False
    return True

def printBoard(board):
    size = len(board)
    for i in range(size):
        row = ['.'] * size
        row[board[i]] = 'Q'
        print(' '.join(row))
    print()

# Example usage
n = 8
solution = calcQueens(n)
if solution:
    printBoard(solution)
else:
    print("No solution exists.")
