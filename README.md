# AdnAssocConstraintAPI

A simplified .NET API for accessing AutoCAD parameters and constraints

## Steps To Build
```
git clone https://github.com/MadhukarMoogala/AdnAssocConstraintAPI.git
cd AdnAssocConstraintAPI
notepad arx64.props  [Set ObjectARX SDK path]
notepad ArxConstraintAPITest\arx.props [set ObjectARX SDK Path]
msbuild AdnAssocConstraintAPI.sln /t:Build /p:Configuration=Release;Platform=x64
```

## Demo

![constraintGif](https://github.com/MadhukarMoogala/AdnAssocConstraintAPI/blob/master/dimDia-Constraint.gif)

## Further Notes:

- [a-simplified-net-api-for-accessing-autocad-parameters-and-constraints](https://through-the-interface.typepad.com/through_the_interface/2011/08/a-simplified-net-api-for-accessing-autocad-parameters-and-constraints.html)

## Migrated By

Madhukar Moogala, Forge Developer Advocate