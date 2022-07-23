VM/Interpreter
Grammatik
Frame/UI

funkECS

* Component
* System DSL
	* spawn
	* remove
	* read
	* modify

component Rendered(
  x: int
  y: int
  width: int
  height: int
  color: int
)

component MyPos(
  x: int
  y: int
)

operator empty
  $ count = count + 1, 0
  > count == 0;

system MyInitialize(query MyPos $ count = count + 1, 0 > count == 0)(
  spawn MyPos(2, 3);

  query MyPos
  > remove Mypos
  > print MyPos
  > kill;

  quit;
)

operations
pipelines

system MyPhysics(
  query MyPos MyVel
  > cross MyPos: OtherPos
  > filter MyPos == OtherPos
  > map MyVel.y * -1
  = inverted
  > set MyVel.y, inverted
  > spawn MyPos(3, 4) MyVel(4, 5);

  query MyPos
  $ count = count + 1, 0
  > count == 0
  = empty;

  "$" id "=" expr "," expr ";"

  query MyPos
  > reduce 0 $ + MyPos.x
  = totalX;

  query MyPos
  > reduce it: it + MyPos.x
  = totalX;

  range 0, 100
  = index
  > spawn MyPos(random(index, 90), random(30, 90))
  ;

  index + $;
)

"reduce" expr "," expr

system MyPhysics(
	query(MyPos,MyVel).cross(MyPos: OtherPos).filter(MyPos == OtherPos).do(MyVel.y *= -1)
)

system MyMove
	query(MyPos,MyVel)
		query(MyPos: OtherPos)
			if MyPos == OtherPos
				MyVel.y *= -1


const obj = {a: 2, b: 3}
const {a: myA, b} = obj

