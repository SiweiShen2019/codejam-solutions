import Control.Monad
import Text.Printf

move :: Integer -> Integer -> Integer
move a b = case mod a b of
    0 -> 0
    c -> b - c

main = do
    i <- getLine
    let t = read i :: Integer
    forM_ [1..t] $ \ _ -> do
        ii <- getLine
        let [a,b] = map (\x -> read x :: Integer) $ words ii
        let c = move a b
        printf "%v\n" c
