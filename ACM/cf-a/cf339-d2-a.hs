import Data.List

main = getContents >>=
  putStrLn . intersperse '+' . sort . filter (\c -> c /= '+' && c /= '\n')
