def minimax(depth, node_index, maximizing, scores, target_depth):
    if depth == target_depth:
        return scores[node_index]

    if maximizing:
        return max(minimax(depth+1, node_index*2, False, scores, target_depth),
                   minimax(depth+1, node_index*2+1, False, scores, target_depth))
    else:
        return min(minimax(depth+1, node_index*2, True, scores, target_depth),
                   minimax(depth+1, node_index*2+1, True, scores, target_depth))

# Leaf values (example game)
scores = [3, 5, 2, 9, 12, 5, 23, 23]

print("Minimax result:", minimax(0, 0, True, scores, 3))
