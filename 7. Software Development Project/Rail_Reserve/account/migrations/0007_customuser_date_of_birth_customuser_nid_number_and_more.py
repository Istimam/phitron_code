# Generated by Django 5.0.6 on 2024-07-18 03:58

import django.core.validators
import django.utils.timezone
from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('account', '0006_alter_customuser_postal_code'),
    ]

    operations = [
        migrations.AddField(
            model_name='customuser',
            name='date_of_birth',
            field=models.DateField(default=django.utils.timezone.now),
        ),
        migrations.AddField(
            model_name='customuser',
            name='nid_number',
            field=models.CharField(default='0000000000', max_length=15, unique=True, validators=[django.core.validators.RegexValidator(message='Field must only contain digits.', regex='^[0-9]*$'), django.core.validators.MinLengthValidator(10), django.core.validators.MaxLengthValidator(15)]),
        ),
        migrations.AlterField(
            model_name='customuser',
            name='phone_no',
            field=models.CharField(max_length=11, unique=True, validators=[django.core.validators.RegexValidator(message='Phone number must be 11 digits long and contain only numbers.', regex='^\\d{11}$'), django.core.validators.MinLengthValidator(11), django.core.validators.MaxLengthValidator(11)]),
        ),
    ]