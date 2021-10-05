// ignore_for_file: missing_required_param

import 'package:flutter/material.dart';
// ignore: unused_import
import 'dart:math';
void main() {
  return runApp(
    MaterialApp(
      home: Scaffold(
        backgroundColor: Colors.blue.shade400,
        appBar: AppBar(
          title: Text('Dicee'),
          backgroundColor: Colors.blue,
        ),
        body: DicePage(),
      ),
    ),
  );
}

class DicePage extends StatefulWidget {
  @override
  State<DicePage> createState() => _DicePageState();
}

class _DicePageState extends State<DicePage> {
  int left=1;
  int right=1;
  @override
  Widget build(BuildContext context) {
    return Center(
      child: Row(
        children: [
          Expanded(
            // ignore: deprecated_member_use
            child: FlatButton(
              onPressed:(){
             setState(() {
               left=Random().nextInt(6)+1;
               right=Random().nextInt(6)+1;


             });
              } ,
              child: Image(
                image: AssetImage('images/dice$left.png'),
              ),
            ),
          ),
          SizedBox(
            width: 5,
          ),
          Expanded(
            // ignore: deprecated_member_use
            child: FlatButton(
              onPressed: (){setState(() {
              right=Random().nextInt(6)+1;
              left=Random().nextInt(6)+1;

              });},
              child: Image(
                image: AssetImage('images/dice$right.png'),
              ),
            ),
          ),
        ],
      ),
    );
  }
}
