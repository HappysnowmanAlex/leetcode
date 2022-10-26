function longestPalindrome(words: string[]): number {
  const isMirror = (word: string) => {
    return !!words.find((w) => w === word.split("").reverse().join(""));
  };

  const occurences = (word: string) => {
    let count = 0;
    words.forEach((w) => {
      if (w === word) count++;
    });
    return count;
  };

  let length = 0;

  let equal = 0;

  while (words.length) {
    let word = words.pop();

    if (word![0] === word![1] && (equal === 0 || occurences(word!) === equal)) {
      length += 2;
      equal === 0 ? (equal = 2) : (equal *= 2);
    } else if (isMirror(word!)) {
      length += 4;
    }
  }

  return length;
}
