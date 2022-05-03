def is_valid_walk(walk):
    if len(walk) == 10:
        if walk.count('n') == walk.count('s') and walk.count('w') == walk.count('e'):
            return True
        else:
            return False
    else:
        return False

print(is_valid_walk(['w','e','w','e','s','n','w','e','e','n',]))