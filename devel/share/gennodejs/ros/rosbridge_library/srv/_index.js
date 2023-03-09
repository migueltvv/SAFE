
"use strict";

let TestEmpty = require('./TestEmpty.js')
let TestMultipleRequestFields = require('./TestMultipleRequestFields.js')
let SendBytes = require('./SendBytes.js')
let TestRequestOnly = require('./TestRequestOnly.js')
let AddTwoInts = require('./AddTwoInts.js')
let TestNestedService = require('./TestNestedService.js')
let TestResponseOnly = require('./TestResponseOnly.js')
let TestMultipleResponseFields = require('./TestMultipleResponseFields.js')
let TestArrayRequest = require('./TestArrayRequest.js')
let TestRequestAndResponse = require('./TestRequestAndResponse.js')

module.exports = {
  TestEmpty: TestEmpty,
  TestMultipleRequestFields: TestMultipleRequestFields,
  SendBytes: SendBytes,
  TestRequestOnly: TestRequestOnly,
  AddTwoInts: AddTwoInts,
  TestNestedService: TestNestedService,
  TestResponseOnly: TestResponseOnly,
  TestMultipleResponseFields: TestMultipleResponseFields,
  TestArrayRequest: TestArrayRequest,
  TestRequestAndResponse: TestRequestAndResponse,
};
