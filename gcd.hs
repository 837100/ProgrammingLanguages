module Main (main) where

main :: IO()
main = putStrLn (show (igcd 54 96))

igcd a 0 = abs a
igcd a b = igcd (abs b) (a `mod` (abs b))