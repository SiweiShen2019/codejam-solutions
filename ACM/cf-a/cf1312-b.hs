import Data.List
import Control.Monad

bogosort :: (Ord a) => [a] -> [a]
bogosort = reverse . sort

main = do
  i <- getLine
  let t = read i :: Int
  forM_ [1..t] $ \_ -> do
    j <- getLine
    ss <- getLine
    let xx = map (\x -> read x :: Int) $ words ss
    let ret = bogosort xx
    putStrLn (intercalate " " (map show ret))
