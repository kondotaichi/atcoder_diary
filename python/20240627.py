import sys
input = sys.stdin.read

def main():
    data = input().split()
    N = 100
    S = data[0:N]
    
    count_takahashi = 0
    for string in S:
        if string == "Takahashi":
            count_takahashi += 1
    
    print(count_takahashi)

if __name__ == "__main__":
    main()