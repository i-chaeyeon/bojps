N, M = map(int, input().split())

board = []
for _ in range(N):
    board.append(input())

min_repaints = float('inf')  # Initialize to a large number

# Function to calculate repaints for a given top-left corner (row, col)
def calculate_repaints(board, row, col, start_color):
    repaint_count = 0
    for i in range(8):
        for j in range(8):
            current_color = 'B' if (i + j) % 2 == 0 else 'W'
            if start_color == 'W':
                current_color = 'W' if (i + j) % 2 == 0 else 'B'
            if board[row + i][col + j] != current_color:
                repaint_count += 1
    return repaint_count

# Iterate over all possible 8x8 sub-boards
for row in range(N - 7):
    for col in range(M - 7):
        repaints_white_start = calculate_repaints(board, row, col, 'W')
        repaints_black_start = calculate_repaints(board, row, col, 'B')
        min_repaints = min(min_repaints, repaints_white_start, repaints_black_start)

print(min_repaints)