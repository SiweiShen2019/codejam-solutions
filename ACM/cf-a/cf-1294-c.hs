import Control.Monad
import Text.Printf

next_div :: Integer -> Integer -> Maybe Integer
next_div n t
  | t * t >= n = Nothing
  | (/=0) $ n `mod` t = next_div n $ t + 1
  | otherwise = Just t

three_divsor :: Integer -> Maybe (Integer, Integer, Integer)
three_divsor n = do
  a <- next_div n 2
  b <- next_div (n `div` a) (a + 1)
  let r = n `div` (a * b)
  c <- if (r==a || r==b) then Nothing else Just r
  return (a, b, c)

one :: Maybe (Integer, Integer, Integer) -> Integer
one (Just (a, b, c)) = a

main = do
  i <- getLine
  let t = read i :: Integer
  forM_ [1..t] $ \ _ -> do
    ii <- getLine
    let n = read ii :: Integer
    let ret = three_divsor n
    case ret of
      Just (a,b,c) -> printf "YES\n%v %v %v\n" a b c
      Nothing -> printf "NO\n"
